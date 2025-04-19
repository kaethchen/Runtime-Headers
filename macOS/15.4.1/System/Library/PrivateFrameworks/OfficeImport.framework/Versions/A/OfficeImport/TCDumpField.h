@class NSString, TCDumpType;

@interface TCDumpField : NSObject {
    TCDumpType *mType;
    NSString *mName;
}

- (id)name;
- (void).cxx_destruct;
- (id)type;
- (id)initWithType:(id)a0 name:(id)a1;

@end
