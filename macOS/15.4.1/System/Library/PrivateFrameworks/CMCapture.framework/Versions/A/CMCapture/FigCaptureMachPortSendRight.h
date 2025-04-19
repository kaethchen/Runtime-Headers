@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithPort:(unsigned int)a0;

@end
