package com.example.service;

import com.example.repository.UserRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Map;

@Service
public class UserService {

    @Autowired
    private UserRepository userRepository;

    public List<Map<String, Object>> getUsers() {
        return userRepository.getAllUsers();
    }

    public void createUser(String firstName, String lastName, String email) {
        userRepository.addUser(firstName, lastName, email);
    }

    public void removeUser(Long id) {
        userRepository.deleteUser(id);
    }
}




