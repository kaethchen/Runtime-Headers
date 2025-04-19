@interface ICNoteSnippetUtilities : NSObject

+ (id)titleForAttributedContent:(id)a0 truncated:(BOOL *)a1 attributedTitleIfNecessary:(id *)a2;
+ (id)attributedStringByRemovingTitle:(id)a0 fromAttributedString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForTitleInContent:(id)a0 truncated:(BOOL *)a1;
+ (id)snippetForAttributedContent:(id)a0 attributedSnippetIfNecessary:(id *)a1;
+ (id)snippetForContent:(id)a0;
+ (id)stringByRemovingTitle:(id)a0 fromString:(id)a1;
+ (id)widgetSnippetForContent:(id)a0;
+ (id)snippetAndTitleTrimCharacterSet;

@end
