package com.example.model;

public class User {
    private Long id;
    private String imie; // name
    private String nazwisko; // surname
    private String email; // email
  // age

    public User(long id, String firstName, String lastName, String email) {
    }

    // Getters and Setters

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getFirstName() {
        return imie;
    }

    public void setImie(String imie) {
        this.imie = imie;
    }

    public String getLastName() {
        return nazwisko;
    }

    public void setNazwisko(String nazwisko) {
        this.nazwisko = nazwisko;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }


}