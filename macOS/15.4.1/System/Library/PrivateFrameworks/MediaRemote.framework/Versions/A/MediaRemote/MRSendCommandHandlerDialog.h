@class NSString, _MRSendCommandResultHandlerDialogProtobuf, NSArray, NSMutableArray;

@interface MRSendCommandHandlerDialog : NSObject <NSCopying> {
    NSMutableArray *_mutableActions;
}

@property (readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *protobuf;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSArray *actions;

+ (id)dialogWithTitle:(id)a0 message:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)initWithProtobuf:(id)a0;

@end
