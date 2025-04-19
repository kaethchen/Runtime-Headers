@class NSColor, NSString;

@interface MUPlatterViewStyleProvider : NSObject <MUPlatterViewStyleProviding>

@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) NSColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
