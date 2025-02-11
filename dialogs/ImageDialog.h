#ifndef H_IMAGE_DIALOG
#define H_IMAGE_DIALOG

class ImageDialog : public CDialog
{
public:
   ImageDialog();
   virtual ~ImageDialog();

protected:
   virtual void OnDestroy();
   virtual void OnClose();
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnCancel();

private:
   CResizer m_resizer;

   void Import();
   void Export();
   void DeleteImage();
   void Reimport();
   void UpdateAll();
   void ShowWhereUsed();
   void ReimportFrom();
   void LoadPosition();
   void SavePosition();
   void UpdateImages();
   void AddToolTip(const char* const text, HWND parentHwnd, HWND toolTipHwnd, HWND controlHwnd);

   static int m_columnSortOrder;
   static bool m_doNotChange;  // to avoid triggering LVN_ITEMCHANGING or LVN_ITEMCHANGED code on deletion
};

class WhereUsedDialog : public CDialog
{
public:
   WhereUsedDialog();
   virtual ~WhereUsedDialog();

protected:
   virtual void OnDestroy();
   virtual void OnClose();
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnCancel();

private:
   CResizer m_resizer;

   void ShowWhereUsed();
   void LoadPosition();
   void SavePosition();
   void RefreshList();
   void AddToolTip(const char* const text, HWND parentHwnd, HWND toolTipHwnd, HWND controlHwnd);
   static int m_columnSortOrder;
   static bool m_doNotChange; // to avoid triggering LVN_ITEMCHANGING or LVN_ITEMCHANGED code on deletion
};

#endif // !H_IMAGE_DIALOG
