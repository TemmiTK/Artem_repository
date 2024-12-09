package com.example.repository;

import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;
import java.util.List;
import java.util.Map;

@Repository
public class UserRepository {

    @Autowired
    private JdbcTemplate jdbcTemplate;

    // Пример метода для получения всех пользователей
    public List<Map<String, Object>> getAllUsers() {
        String sql = "SELECT * FROM users";
        return jdbcTemplate.queryForList(sql);
    }

    // Пример метода для получения пользователя по ID


    // Пример метода для добавления нового пользователя
    public void addUser(String firstName, String lastName, String email) {
        String sql = "INSERT INTO users (first_name, last_name, email) VALUES (?, ?, ?)";
        jdbcTemplate.update(sql, firstName, lastName, email);
    }

    // Пример метода для удаления пользователя
    public void deleteUser(Long id) {
        String sql = "DELETE FROM users WHERE id = ?";
        jdbcTemplate.update(sql, id);
    }
}
