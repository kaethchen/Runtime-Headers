@interface NSRendezvousChildWindowController : NSSemiAutonomousRendezvousWindowController {
    unsigned char _childControllerInvalid : 1;
}

- (void)invalidate;
- (void)invalidateWithError:(id)a0;

@end
