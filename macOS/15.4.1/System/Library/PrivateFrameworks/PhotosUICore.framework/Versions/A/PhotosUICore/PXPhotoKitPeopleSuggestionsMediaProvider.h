@interface PXPhotoKitPeopleSuggestionsMediaProvider : PXPeopleSuggestionsMediaProvider

- (void)cancelRequest:(int)a0;
- (int)requestImageForPersonSuggestion:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 cropFactor:(long long)a3 cornerStyle:(long long)a4 resultHandler:(id /* block */)a5;

@end
