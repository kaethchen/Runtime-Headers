@class NSString, CNLabeledValue, CNContact;

@interface MSPSharedTripContact : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSString *_originalHandle;
    BOOL _isBlocked;
    double _lastCheckedBlocked;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isPhoneNumber;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSString *handleForIDS;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)isHandleBlocked:(id)a0;
+ (id)_propertiesForFetching;
+ (unsigned long long)capabilityTypeForVirtualReceiver:(id)a0;
+ (id)capabilityVersionsForVirtualReceiver:(id)a0;
+ (id)contactsFromCNContact:(id)a0;
+ (id)contactsFromCNContact:(id)a0 andIdentifiers:(id)a1;
+ (id)contactsFromCNContact:(id)a0 matchingHandles:(id)a1;
+ (id)contactsFromHandles:(id)a0;
+ (id)contactsFromIDSHandles:(id)a0;
+ (id)contactsFromVirtualReceiverHandles:(id)a0;
+ (id)iMessageVirtualReceiverWithName:(id)a0;
+ (BOOL)isVirtualReceiver:(id)a0;
+ (id)mapsVirtualReceiverWithName:(id)a0;
+ (id)mapsVirtualReceiverWithName:(id)a0 receiverCapabilityVersion:(id)a1;
+ (id)rcsVirtualReceiverWithName:(id)a0;
+ (void)setAdditionalKeyDescriptorsForContactFetching:(id)a0;
+ (id)smsVirtualReceiverWithName:(id)a0;
+ (id)virtualReceiverWithHandle:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringValue;
- (BOOL)isHandleBlocked;
- (void)_populateFromContactUsingHandle:(id)a0;
- (id)handleForDeviceVersion:(unsigned long long)a0;
- (id)initWithContact:(id)a0 handle:(id)a1;
- (id)initWithContact:(id)a0 labeledValue:(id)a1;
- (id)initWithContactHandle:(id)a0;
- (void)startLiveUpdatesForCapabilityVersion:(unsigned long long)a0;
- (void)stopLiveUpdatesForCapabilityVersion:(unsigned long long)a0;

@end
