void listAll(const File* f, string path)  // two-parameter overload
{
    if (f->name() != ""){
        cout << path << '/' + f->name() << endl;
    }

    if (f->files() == nullptr || f->files()->size() == 0) {
        return;
    }

    if (f->name() != ""){
        path += '/' + f->name();
    }

    for (vector<File*>::const_iterator p = f->files()->begin(); p!=f->files()->end(); p++) {
        listAll((*p), path);
    }
}
