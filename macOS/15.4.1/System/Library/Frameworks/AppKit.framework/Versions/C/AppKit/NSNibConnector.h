@class NSString;

@interface NSNibConnector : NSObject <NSCoding> {
    id _source;
    id _destination;
    NSString *_label;
}

@property (weak) id source;
@property (weak) id destination;
@property (copy) NSString *label;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
