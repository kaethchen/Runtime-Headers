@class NSString, NSURL;
@protocol FCChannelProviding;

@interface FCLocalRecipe : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) unsigned long long contentFormat;
@property (readonly, nonatomic) unsigned long long contentEncoding;
@property (readonly, nonatomic) NSString *thumbnailPrimaryColor;
@property (readonly, nonatomic) NSString *thumbnailBackgroundColor;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 shortExcerpt:(id)a2 sourceChannel:(id)a3 thumbnailURL:(id)a4 contentURL:(id)a5 contentFormat:(unsigned long long)a6 contentEncoding:(unsigned long long)a7 thumbnailPrimaryColor:(id)a8 thumbnailBackgroundColor:(id)a9;

@end
