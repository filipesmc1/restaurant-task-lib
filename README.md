# restaurant-task
Projeto Teste - Qt/QML/C++

1 - <b>O Problema:</b>

 Descobrir os restaurantes abertos em determinado horário.

2 - <b>A solução:</b>

 Uma library que recebe um horário desejado e retorna os restaurantes abertos.
 
3 - <b>Features:</b>

  Ler um arquivo CSV e retornar os restaurantes disponíveis naquele horário.
  
4 - <b>Descrição</b>

  findRestaurantByHourTest é o projeto para teste independente da lib. Qualquer nova feature ou alteração na lib basta chama-la no projeto-teste.
  restaurant_finder-lib é a lib em si. Deve ser compilada e linkada no projeto em que for utiliza-la.
  restaurant_finder-ui é uma user interface em QML.
  
  A user interface também pode ser utilizada através do projeto teste e no projeto que vai para produção.
  
  Na user interface, exemplo (<i>restaurant_finder-ui/main.cpp</i>):
  
  <b>engine.rootContext()->setContextProperty("restaurantsEntity", restaurantsEntity);</b> <-- Código final.
  <b>engine.rootContext()->setContextProperty("findRestaurantByHour", findRestaurantByHour);</b> <-- Projeto Teste.
  
  Basta setar os contextos e na OpenRestaurants.qml escolher por qual classe vai chamar. No projeto teste, o método que trigga o método da unica e           principal feature é o run() que chama o método availableHours().
  
  O projeto principal é composto por três classes implementadas: Restaurant, RestaurantFinder e CSVRepository.
  Uma interface IRestaurantRepository podendo a sua escolha optar por implementar uma classe de acordo com a fonte dos seus dados, seja webservice, banco     relacional e não relacional. Até o momento a lib suporta arquivos CSV como fonte de dados.
  
  Na classe findRestaurantyHourTest contém um método <b>run()</b> que possa chamar qualquer outro método da classe da qual queira testar.
  Um construtor que recebe um ponteiro para qualquer entidade e para o objeto parent e um sinal success caso tudo ocorra como esperado.
  
  <b>Exemplo de Uso</b>
  
  int main(){
  
  auto entity = new Entity::RestaurantFinder(*parent);
  
  auto repository = new Repository::CSVRepository(*parent);
  
  entity->setRepository(repository);
  
  entity->availableHours("path/arquivo/csv", "14:00");
  
  }
  
  
