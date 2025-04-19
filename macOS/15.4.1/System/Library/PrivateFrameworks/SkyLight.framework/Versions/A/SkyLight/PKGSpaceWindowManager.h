@class NSMutableData, NSMutableDictionary;

@interface PKGSpaceWindowManager : NSObject {
    unsigned long long _transactionCount;
    NSMutableData *_transactionNotificationData;
    NSMutableDictionary *_spaceIDToBatchReassociatedWindows;
    unsigned int _sessionID;
}

- (id)init;
- (void).cxx_destruct;

@end
