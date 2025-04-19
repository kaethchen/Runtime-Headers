@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject {
    NSString *_name;
    VMUSourceInfo *_sourceInfo;
}

- (id)name;
- (void).cxx_destruct;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 address:(unsigned long long)a1;
- (id)sourceInfoForAddress:(unsigned long long)a0;

@end
