@interface NSRendezvousAppModalSessionController : NSSemiAutonomousRendezvousWindowController {
    unsigned int _ending;
}

- (void)invalidate;
- (void)invalidateWhileEnding:(BOOL)a0;

@end
