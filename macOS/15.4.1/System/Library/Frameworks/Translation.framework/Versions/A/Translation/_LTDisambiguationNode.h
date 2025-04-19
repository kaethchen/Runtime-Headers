@class NSString, NSArray;

@interface _LTDisambiguationNode : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *links;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_removeAllLinks;
- (void)_insertPrefix:(id)a0;
- (void)_removeRomanization;
- (id)initWithText:(id)a0 links:(id)a1 romanization:(id)a2;

@end
