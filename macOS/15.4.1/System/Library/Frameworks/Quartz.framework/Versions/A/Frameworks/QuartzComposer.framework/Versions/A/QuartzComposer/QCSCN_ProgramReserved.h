@class NSString, NSMutableDictionary;

@interface QCSCN_ProgramReserved : NSObject {
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_name;
    id _delegate;
    NSMutableDictionary *_parameters;
}

- (void)dealloc;

@end
