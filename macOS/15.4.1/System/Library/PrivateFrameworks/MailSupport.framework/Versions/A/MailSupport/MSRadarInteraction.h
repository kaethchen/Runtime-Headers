@class NSURL, NSString;

@interface MSRadarInteraction : NSObject

@property (readonly, nonatomic) NSURL *radarURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) id /* block */ openHandler;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) NSString *maybeLaterButtonTitle;
@property (copy, nonatomic) id /* block */ maybeLaterHandler;

+ (id)interactionWithTitle:(id)a0 message:(id)a1 builder:(id /* block */)a2;
+ (id)interactionWithTitle:(id)a0 message:(id)a1 radarURL:(id)a2;

- (void).cxx_destruct;
- (void)runModal;
- (void)promptToFileWithCompletionHandler:(id /* block */)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 radarURL:(id)a2;
- (void)openTapToRadar;
- (void)promptToFile;

@end
