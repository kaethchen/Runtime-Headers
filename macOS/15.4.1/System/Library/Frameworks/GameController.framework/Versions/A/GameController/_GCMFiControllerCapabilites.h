@interface _GCMFiControllerCapabilites : NSObject {
    unsigned int _type;
    unsigned int _buttonPresent;
    unsigned int _buttonDigital;
    unsigned char _dpadPresent : 4;
    unsigned char _dpadDigital : 4;
    unsigned char _thumbstickPresent;
    unsigned char _thumbstickDigital;
    unsigned char _homePresent : 1;
    unsigned char _homeDigital : 1;
    unsigned char _menuPresent : 1;
    unsigned char _menuDigital : 1;
    unsigned char _optionsPresent : 1;
    unsigned char _optionsDigital : 1;
    unsigned char _recordPresent : 1;
    unsigned char _recordDigital : 1;
    unsigned char _snapshotPresent : 1;
    unsigned char _snapshotDigital : 1;
}

+ (BOOL)isServiceAuthenticated:(id)a0;

- (id)description;

@end
