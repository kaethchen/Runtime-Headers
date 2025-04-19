@class ITMediaLibrary, MPMediaQueryCriteria;

@interface ITMediaLibraryQuery : NSObject {
    int foo;
}

@property (retain, nonatomic) ITMediaLibrary *library;
@property (retain, nonatomic) MPMediaQueryCriteria *criteria;

- (void).cxx_destruct;
- (id)initWithQueryCriteria:(id)a0 mediaLibrary:(id)a1;

@end
