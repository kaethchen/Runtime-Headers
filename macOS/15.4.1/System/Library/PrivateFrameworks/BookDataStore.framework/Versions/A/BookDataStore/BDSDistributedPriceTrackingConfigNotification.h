@class NSString;

@interface BDSDistributedPriceTrackingConfigNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *titleSingleAudiobook;
@property (readonly, copy, nonatomic) NSString *titleSingleBook;
@property (readonly, copy, nonatomic) NSString *titleMultiple;
@property (readonly, copy, nonatomic) NSString *bodySingleAudiobook;
@property (readonly, copy, nonatomic) NSString *bodySingleBook;
@property (readonly, copy, nonatomic) NSString *bodyMultiple;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitleSingle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitleSingle:(id)a1 bodySingleAudiobook:(id)a2 bodySingleBook:(id)a3 bodyMultiple:(id)a4;
- (id)initWithTitleSingleAudiobook:(id)a0 titleSingleBook:(id)a1 titleMultiple:(id)a2 bodySingleAudiobook:(id)a3 bodySingleBook:(id)a4 bodyMultiple:(id)a5;

@end
