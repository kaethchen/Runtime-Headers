@interface NSVBHostAppAuxiliaryConnection : NSVBHasClientAuxiliaryConnection {
    char _accepted;
    int _auxServicePID;
}

- (void)dealloc;
- (id)init;

@end
