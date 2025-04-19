@interface SCRBomArchiver : NSObject {
    struct _BOMCopier { } *bom;
}

- (void)dealloc;
- (id)init;
- (id)archive:(id)a0;
- (id)uniqueLogPath;

@end
