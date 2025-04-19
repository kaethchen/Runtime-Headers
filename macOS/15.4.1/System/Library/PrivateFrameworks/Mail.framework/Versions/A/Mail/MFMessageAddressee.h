@class NSString;
@protocol MFScriptingMessage;

@interface MFMessageAddressee : NSObject {
    NSString *_displayName;
    NSString *_address;
}

@property (readonly, copy, nonatomic) NSString *type;
@property (retain, nonatomic) id<MFScriptingMessage> message;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *formattedAddress;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (id)initWithDisplayName:(id)a0 address:(id)a1 type:(id)a2 message:(id)a3;

@end
