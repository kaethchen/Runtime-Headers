@class NSString;

@interface SAOnBehalfOfSingle : NSObject <NSCopying> {
    int _proximatePid;
    int _originPid;
    NSString *_proximateName;
    NSString *_originName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
