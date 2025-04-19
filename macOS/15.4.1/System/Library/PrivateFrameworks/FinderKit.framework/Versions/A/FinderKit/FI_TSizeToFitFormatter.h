@class NSDictionary;

@interface FI_TSizeToFitFormatter : NSFormatter {
    NSDictionary *_attributes;
}

@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (BOOL)fits:(const void *)a0;
- (double)measure:(const void *)a0;
- (void)updatedSize:(struct CGSize { double x0; double x1; })a0 attributes:(id)a1;

@end
