@class NSString, NSColor;

@interface MKTransitIncidentViewModel : NSObject

@property (readonly, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, getter=isBlocking) BOOL blocking;
@property (nonatomic) BOOL showImage;
@property (readonly, nonatomic) NSColor *symbolColor;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
