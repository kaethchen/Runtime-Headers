@class NSString, NSSet, NSIndexSet, NSArray;

@interface EARVoiceCommandInterpretation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commandIdentifier;
@property (readonly, copy, nonatomic) NSSet *suiteIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) NSIndexSet *verbIndexes;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommandIdentifier:(id)a0 suiteIdentifiers:(id)a1 verbIndexes:(id)a2 arguments:(id)a3;

@end
