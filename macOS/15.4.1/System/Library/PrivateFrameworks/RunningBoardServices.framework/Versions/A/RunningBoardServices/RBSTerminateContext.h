@class NSArray, NSString, NSDictionary;

@interface RBSTerminateContext : NSObject <RBSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) BOOL preventIfBeingDebugged;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) unsigned int exceptionDomain;
@property (nonatomic) unsigned long long exceptionCode;
@property (copy, nonatomic) NSDictionary *additionalPayload;
@property (nonatomic) unsigned char maximumTerminationResistance;
@property (readonly, nonatomic) BOOL shouldTerminatePlugIns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContextWithExplanation:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithExplanation:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
