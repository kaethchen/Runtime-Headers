@interface MZSessionManager : NSObject {
    id _application;
}

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleEnteredBackground;
- (void)handleEnteredForeground;
- (BOOL)sessionCanActivate;
- (int)stopAllPlayersInSession:(unsigned int)a0 fadeOutDuration:(unsigned int)a1;

@end
