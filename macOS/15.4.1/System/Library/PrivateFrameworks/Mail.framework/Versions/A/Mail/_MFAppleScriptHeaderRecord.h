@class NSString, MCMessage;

@interface _MFAppleScriptHeaderRecord : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id content;
@property (retain, nonatomic) MCMessage *message;

- (void).cxx_destruct;
- (id)objectSpecifier;

@end
