@class NSString, NSDictionary;

@interface NSNibBindingConnector : NSNibConnector <NSCoding> {
    NSString *_binding;
    NSString *_keyPath;
    NSDictionary *_options;
    struct __nibBindingConnectorFlags { unsigned char _hasEstablishedConnection : 1; unsigned int _reservedNibBindingConnector : 31; } _nibBindingConnectorFlags;
    NSNibBindingConnector *_previousConnector;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (id)binding;
- (id)options;
- (id)keyPath;
- (void)setOptions:(id)a0;
- (id)_previousNibBindingConnector;
- (void)_setPreviousNibBindingConnector:(id)a0;
- (void)_updateForVersion:(long long)a0;
- (void)_updateLabel;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setBinding:(id)a0;
- (void)setKeyPath:(id)a0;

@end
