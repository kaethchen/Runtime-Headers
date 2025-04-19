@class NSString, NSColor;

@interface _MCMimeEnrichedState : NSObject

@property (nonatomic) unsigned char excerptLevel;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL italic;
@property (nonatomic) BOOL fixed;
@property (nonatomic) BOOL underline;
@property (nonatomic) short fontDelta;
@property (copy, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;

@end
