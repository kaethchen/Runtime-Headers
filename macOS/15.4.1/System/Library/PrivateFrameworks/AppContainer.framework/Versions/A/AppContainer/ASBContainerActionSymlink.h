@class NSString;

@interface ASBContainerActionSymlink : ASBContainerAction {
    NSString *_linkSpec;
    NSString *_destSpec;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithTargetPath:(id)a0 linkPath:(id)a1;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
