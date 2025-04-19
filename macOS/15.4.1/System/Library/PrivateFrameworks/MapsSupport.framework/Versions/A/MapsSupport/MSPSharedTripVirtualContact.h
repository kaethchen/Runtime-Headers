@class NSString, NSMutableDictionary;

@interface MSPSharedTripVirtualContact : MSPSharedTripContact {
    NSString *_virtualReceiverHandle;
    NSString *_virtualReceiverName;
    NSMutableDictionary *_deviceHandlesByVersion;
}

- (void).cxx_destruct;
- (id)stringValue;
- (id)displayName;
- (id)contact;
- (id)labeledValue;
- (BOOL)isPhoneNumber;
- (id)_deviceHandleForVersion:(unsigned long long)a0;
- (id)handleForIDS;
- (id)initWithVirtualReceiverHandle:(id)a0;

@end
