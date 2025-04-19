@class NSString;

@interface CALSoundFile : NSObject {
    int _type;
    NSString *_name;
    NSString *_extension;
}

- (id)name;
- (void).cxx_destruct;
- (id)path;
- (void)setName:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (id)displayName;
- (long long)compareName:(id)a0;
- (long long)compareNameThenType:(id)a0;
- (long long)compareType:(id)a0;
- (long long)compareTypeThenName:(id)a0;
- (id)initWithName:(id)a0 type:(int)a1 extension:(id)a2;
- (id)pathWithoutExtension;

@end
