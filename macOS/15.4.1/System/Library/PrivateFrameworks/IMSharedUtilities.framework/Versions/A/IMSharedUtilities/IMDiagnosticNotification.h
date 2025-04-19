@class NSString;

@interface IMDiagnosticNotification : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) BOOL timeSensitive;

- (id)init;
- (void).cxx_destruct;
- (id)_createContent;
- (id)_createRequest;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
