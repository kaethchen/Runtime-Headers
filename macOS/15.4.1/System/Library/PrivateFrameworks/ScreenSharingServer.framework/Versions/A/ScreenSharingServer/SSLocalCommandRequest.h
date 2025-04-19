@class NSString, NSObject;
@protocol OS_xpc_object;

@interface SSLocalCommandRequest : NSObject <SSXPCCodable>

@property (class, readonly, nonatomic) NSString *xpcIdentifierKey;
@property (class, readonly, nonatomic) unsigned long long xpcIdentifier;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCRepresentation:(id)a0;

@end
