-- Write your query below
-- select p.first_name,p.last_name,a.city,a.state from person p inner join address a where p.person_id=a.person_id;
SELECT
    p.first_name,
    p.last_name,
    a.city,
    a.state
FROM person p
LEFT JOIN address a ON p.person_id = a.person_id;
