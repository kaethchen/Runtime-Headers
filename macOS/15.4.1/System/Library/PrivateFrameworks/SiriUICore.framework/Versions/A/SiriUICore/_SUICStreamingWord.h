@class NSArray, NSImage, CALayer;

@interface _SUICStreamingWord : NSObject

@property (retain, nonatomic) _SUICStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSArray *emojiRangesInText;
@property (nonatomic) double glyphLocationInWordX;
@property (retain, nonatomic) CALayer *wordLayer;
@property (retain, nonatomic) NSImage *beginImage;
@property (retain, nonatomic) NSImage *endImage;

- (id)init;
- (void).cxx_destruct;

@end
