#pragma once
#include <string>

using namespace std;

 /**
  * @class Book
  * @brief Représente un livre avec un identifiant, un titre et une année de publication.
  *
  * La classe Book contient des informations de base sur un livre, y compris des méthodes
  * pour afficher les informations et comparer les livres.
  */
class Book
{
  /**
   * @brief Surcharge de l'opérateur d'insertion pour afficher un livre.
   *
   * @param os Référence à un flux de sortie.
   * @param book Référence constante à un objet Book à afficher.
   * @return Référence à un flux de sortie.
   *
   * Affiche les informations du livre dans le flux de sortie.
   */
  friend std::ostream& operator<<(std::ostream& os, const Book& book);

public:
  /**
   * @brief Constructeur par défaut.
   *
   * Initialise un objet Book avec des valeurs par défaut.
   */
  Book();

  /**
   * @brief Constructeur de copie.
   *
   * @param src Référence constante à un objet Book à copier.
   *
   * Crée une copie profonde de l'objet src.
   */
  Book(const Book& src);

  /**
   * @brief Constructeur avec paramètres.
   *
   * @param _id Identifiant du livre.
   * @param _title Titre du livre.
   * @param _year Année de publication du livre.
   *
   * Initialise un objet Book avec les valeurs spécifiées.
   */
  Book(unsigned int _id, std::string _title, unsigned int _year);

  /**
   * @brief Destructeur.
   *
   * Libère les ressources allouées par l'objet Book.
   */
  ~Book();

  /**
   * @brief Affiche les informations du livre.
   *
   * Affiche l'identifiant, le titre et l'année de publication du livre.
   */
  void display() const;

  /**
   * @brief Opérateur de comparaison.
   *
   * @param book Référence constante à un objet Book à comparer.
   * @return true si les livres sont identiques, sinon false.
   *
   * Compare les livres par identifiant, titre et année de publication.
   */
  bool operator==(const Book& book) const;

  /**
   * @brief Opérateur de comparaison inférieure.
   *
   * @param book Référence constante à un objet Book à comparer.
   * @return true si l'objet actuel est inférieur à book, sinon false.
   *
   * Compare les livres par identifiant, titre et année de publication.
   */
  bool operator<(const Book& book) const;

  /**
   * @brief Opérateur de comparaison supérieure.
   *
   * @param book Référence constante à un objet Book à comparer.
   * @return true si l'objet actuel est supérieur à book, sinon false.
   *
   * Compare les livres par identifiant, titre et année de publication.
   */
  bool operator>(const Book& book) const;

  /**
   * @brief Opérateur de comparaison d'inégalité.
   *
   * @param book Référence constante à un objet Book à comparer.
   * @return true si les livres ne sont pas identiques, sinon false.
   *
   * Compare les livres par identifiant, titre et année de publication.
   */
  bool operator!=(const Book& book) const;

private:
  unsigned int id; /**< Identifiant du livre. */
  std::string title; /**< Titre du livre. */
  unsigned int year; /**< Année de publication du livre. */
};


