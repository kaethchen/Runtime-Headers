@class NSString;

@interface _SWCollaborationMetadataType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) _SWCollaborationMetadataType *collaboration;
@property (class, readonly, copy, nonatomic) _SWCollaborationMetadataType *event;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *typedIdentifier;
@property (retain, nonatomic) NSString *actionDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTypedIdentifier:(id)a0 actionDescription:(id)a1;
- (BOOL)isEqualToCollaborationMetadataType:(id)a0;

@end
