@class NSString, NSArray, EMSearchableMessageID, NSDate, ECMessageFlags;
@protocol ECEmailAddressConvertible;

@interface EMOriginalContentMessage : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) EMSearchableMessageID *searchableMessageID;
@property (readonly, nonatomic) NSString *bodyText;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, nonatomic) id<ECEmailAddressConvertible> sender;
@property (readonly, copy, nonatomic) NSArray *toList;
@property (readonly, copy, nonatomic) NSArray *ccList;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchableMessageID:(id)a0 bodyText:(id)a1 subject:(id)a2 sender:(id)a3 toList:(id)a4 ccList:(id)a5 flags:(id)a6 date:(id)a7;
- (id)initWithSearchableMessageID:(id)a0 bodyText:(id)a1 sender:(id)a2 date:(id)a3;

@end
