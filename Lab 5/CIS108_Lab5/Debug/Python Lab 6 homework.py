#Dictionary
prompt=input ("Enter y to continue, q to quit")   
while input:
    if prompt =='y':
        player_name=input("player_name")
        nick_name=input("nick_name")
        points_earned=input("points_earned") 
        player({'id' : player_name, 'name' : nick_name, 'points' : points_earned})
        players = []
    elif input=='q':
        exit  

