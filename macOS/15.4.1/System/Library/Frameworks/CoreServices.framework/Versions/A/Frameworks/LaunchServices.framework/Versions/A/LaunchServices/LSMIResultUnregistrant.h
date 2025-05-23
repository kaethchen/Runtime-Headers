@class NSUUID, NSString, LSPrecondition;
@protocol LSRegistrantStrategy;

@interface LSMIResultUnregistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSString *_bundleID;
    LSPrecondition *_precondition;
    unsigned int _type;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 operationUUID:(id)a1 bundleIdentifier:(id)a2 precondition:(id)a3 type:(unsigned int)a4;
- (void)runWithCompletion:(id /* block */)a0;

@end
