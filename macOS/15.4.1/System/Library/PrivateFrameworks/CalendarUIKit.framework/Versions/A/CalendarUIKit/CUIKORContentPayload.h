@class NSImage, NSAttributedString, CUIKORTextDrawInfo;

@interface CUIKORContentPayload : NSObject

@property (readonly, nonatomic) long long requestId;
@property (readonly, nonatomic) unsigned long long requestOptions;
@property (readonly, nonatomic) NSImage *backgroundImage;
@property (readonly, nonatomic) NSImage *textImage;
@property (readonly, nonatomic) CUIKORTextDrawInfo *textDrawInfo;
@property (readonly, nonatomic) NSImage *travelTimeImage;
@property (readonly, nonatomic) NSAttributedString *travelTimeString;

- (void).cxx_destruct;
- (id)initWithRequestId:(long long)a0 requestOptions:(unsigned long long)a1 backgroundImage:(id)a2 textImage:(id)a3 textDrawInfo:(id)a4 travelTimeImage:(id)a5 travelTimeString:(id)a6;

@end
