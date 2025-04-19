@interface NFSingleUserSession : NFSession

- (id)checkUserBlessing:(id)a0 hasCards:(BOOL *)a1;
- (id)setBlessedUser:(id)a0 keybagUUID:(id)a1 withAuthorization:(id)a2;
- (BOOL)hasCard:(id *)a0;
- (id)setBlessedUser:(id)a0 withAuthorization:(id)a1;

@end
