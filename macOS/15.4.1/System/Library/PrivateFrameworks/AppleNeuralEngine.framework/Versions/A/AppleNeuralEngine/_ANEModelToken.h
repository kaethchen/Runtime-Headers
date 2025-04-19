@class NSString;

@interface _ANEModelToken : NSObject

@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *csIdentity;
@property (readonly, nonatomic) NSString *teamIdentity;
@property (readonly, nonatomic) int processIdentifier;

+ (id)codeSigningIDFor:(struct { unsigned int x0[8]; })a0 processIdentifier:(int)a1;
+ (id)processNameFor:(struct { unsigned int x0[8]; })a0 identifier:(int)a1;
+ (id)teamIDFor:(struct { unsigned int x0[8]; })a0 processIdentifier:(int)a1;
+ (id)tokenWithAuditToken:(struct { unsigned int x0[8]; })a0 modelIdentifier:(id)a1 processIdentifier:(int)a2;
+ (id)tokenWithCsIdentity:(id)a0 teamIdentity:(id)a1 modelIdentifier:(id)a2 processIdentifier:(int)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 modelIdentifier:(id)a1 processIdentifier:(int)a2;
- (id)initWithCsIdentity:(id)a0 teamIdentity:(id)a1 modelIdentifier:(id)a2 processIdentifier:(int)a3;

@end
