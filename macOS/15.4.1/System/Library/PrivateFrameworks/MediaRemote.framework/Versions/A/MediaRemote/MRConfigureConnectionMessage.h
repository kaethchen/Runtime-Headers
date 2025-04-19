@class NSString;

@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (copy, nonatomic) NSString *groupID;

- (unsigned long long)type;
- (id)initWithGroupID:(id)a0;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
