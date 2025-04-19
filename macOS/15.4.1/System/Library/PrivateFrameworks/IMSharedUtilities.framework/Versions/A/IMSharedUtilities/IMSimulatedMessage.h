@class NSString, NSArray, IMMessageItem;

@interface IMSimulatedMessage : NSObject <NSSecureCoding, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IMMessageItem *item;
@property (readonly, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *chatGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *lastAddressedHandle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)_copyDictionaryRepresentation;

@end
