@class NSImage;

@interface CNUISymbolRepository : NSObject

@property (class, readonly, nonatomic) NSImage *printPortraitSymbol;
@property (class, readonly, nonatomic) NSImage *printLandscapeSymbol;
@property (class, readonly, nonatomic) NSImage *actionSendMessage;
@property (class, readonly, nonatomic) NSImage *actionSendEmail;
@property (class, readonly, nonatomic) NSImage *actionDialNumber;
@property (class, readonly, nonatomic) NSImage *actionVideoCall;
@property (class, readonly, nonatomic) NSImage *actionShare;

@end
